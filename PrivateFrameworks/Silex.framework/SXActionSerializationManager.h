
@interface SXActionSerializationManager : NSObject <SXActionSerializationManager, SXActionSerializer> {
    NSMutableDictionary * _serializers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *serializers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForAction:(id)arg1 type:(long long)arg2;
- (id)init;
- (void)registerSerializer:(id)arg1 actionType:(id)arg2;
- (id)serializers;

@end
