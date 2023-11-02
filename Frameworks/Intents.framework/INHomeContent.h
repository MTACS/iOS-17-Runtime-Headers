
@interface INHomeContent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSArray * _actions;
    INHomeFilter * _filter;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INHomeFilter *filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilter:(id)arg1 actions:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
