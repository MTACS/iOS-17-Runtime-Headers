
@interface CPUIAssistantCellConfiguration : NSObject <CPUIAssistantCellConfigurationProtocol> {
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)configurationWithText:(id)arg1;

- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (id)text;

@end
