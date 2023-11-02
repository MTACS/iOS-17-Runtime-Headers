
@interface CACVoiceOverItemShortDescriptionPair : NSObject {
    <CACVoiceOverDescribable> * _item;
    NSString * _shortDescription;
}

@property (nonatomic, retain) <CACVoiceOverDescribable> *item;
@property (nonatomic, retain) NSString *shortDescription;

- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (id)shortDescription;

@end
