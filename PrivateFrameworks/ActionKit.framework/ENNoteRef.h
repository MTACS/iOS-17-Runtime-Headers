
@interface ENNoteRef : NSObject <NSCoding, NSCopying, WFSerializableContent> {
    NSString * _guid;
    ENLinkedNotebookRef * _linkedNotebook;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ENLinkedNotebookRef *linkedNotebook;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)noteRefFromData:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)asData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)linkedNotebook;
- (void)setGuid:(id)arg1;
- (void)setLinkedNotebook:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)wfSerializedRepresentation;

@end
