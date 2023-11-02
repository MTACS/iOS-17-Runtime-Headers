
@interface _INPBJoinCallIntent : PBCodable <NSCopying, NSSecureCoding, _INPBJoinCallIntent> {
    _INPBCallGroupConversation * _groupConversation;
    _INPBCallGroupConversationFilter * _groupConversationFilter;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBCallGroupConversation *groupConversation;
@property (nonatomic, retain) _INPBCallGroupConversationFilter *groupConversationFilter;
@property (nonatomic, readonly) bool hasGroupConversation;
@property (nonatomic, readonly) bool hasGroupConversationFilter;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupConversation;
- (id)groupConversationFilter;
- (bool)hasGroupConversation;
- (bool)hasGroupConversationFilter;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupConversation:(id)arg1;
- (void)setGroupConversationFilter:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
