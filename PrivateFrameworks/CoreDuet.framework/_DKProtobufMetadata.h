
@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting> {
    NSDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createFromData:(id)arg1;
+ (id)fromPBCodable:(id)arg1;

- (void).cxx_destruct;
- (id)asData;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)toPBCodable;

@end
