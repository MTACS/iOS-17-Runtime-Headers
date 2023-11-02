
@interface WFWordPressFile : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSNumber * _fileId;
    NSString * _filename;
    NSString * _type;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSNumber *fileId;
@property (nonatomic, readonly, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)fileIdJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)fileId;
- (id)filename;
- (id)type;
- (id)url;

@end
