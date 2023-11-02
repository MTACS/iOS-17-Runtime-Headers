
@interface HKInfographicTextItem : NSObject <HKInfographicItem> {
    NSAttributedString * _descriptionString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionString;
- (id)initWithDescription:(id)arg1;
- (void)setDescriptionString:(id)arg1;

@end
