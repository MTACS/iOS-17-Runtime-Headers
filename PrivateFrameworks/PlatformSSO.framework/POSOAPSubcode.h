
@interface POSOAPSubcode : NSObject <POXSDefinitionProvider> {
    NSString * _Value;
}

@property (nonatomic, copy) NSString *Value;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)Value;
- (id)description;
- (void)setValue:(id)arg1;

@end
