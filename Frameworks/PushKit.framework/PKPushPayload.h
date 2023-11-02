
@interface PKPushPayload : NSObject {
    NSDictionary * _dictionaryPayload;
    NSString * _type;
}

@property (copy) NSDictionary *dictionaryPayload;
@property (copy) NSString *type;

- (void).cxx_destruct;
- (id)dictionaryPayload;
- (void)setDictionaryPayload:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
