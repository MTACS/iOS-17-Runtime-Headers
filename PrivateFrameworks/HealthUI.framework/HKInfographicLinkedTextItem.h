
@interface HKInfographicLinkedTextItem : NSObject <HKInfographicItem> {
    NSAttributedString * _descriptionString;
    id /* block */  _didTapLinkedText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSAttributedString *descriptionString;
@property (nonatomic, copy) id /* block */ didTapLinkedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionString;
- (id /* block */)didTapLinkedText;
- (id)initWithDescription:(id)arg1 didTapLinkedText:(id /* block */)arg2;
- (void)setDescriptionString:(id)arg1;
- (void)setDidTapLinkedText:(id /* block */)arg1;

@end
