
@interface POSOAPReason : NSObject <POXSDefinitionProvider> {
    POSOAPText * _Text;
}

@property (nonatomic, retain) POSOAPText *Text;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)Text;
- (id)description;
- (void)setText:(id)arg1;

@end
