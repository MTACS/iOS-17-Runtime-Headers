
@interface POSOAPText : NSObject <POXSDefinitionProvider> {
    NSString * _stringValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;
- (void)setStringValue:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)stringValue;

@end
