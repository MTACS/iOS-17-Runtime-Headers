
@interface POSOAPCode : NSObject <POXSDefinitionProvider> {
    POSOAPSubcode * _Subcode;
    NSString * _Value;
}

@property (nonatomic, retain) POSOAPSubcode *Subcode;
@property (nonatomic, copy) NSString *Value;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)Subcode;
- (id)Value;
- (id)description;
- (void)setSubcode:(id)arg1;
- (void)setValue:(id)arg1;

@end
