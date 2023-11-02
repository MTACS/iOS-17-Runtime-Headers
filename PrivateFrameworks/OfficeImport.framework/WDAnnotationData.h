
@interface WDAnnotationData : NSObject {
    NSDate * mDate;
    NSString * mOwner;
    WDText * mText;
}

- (void).cxx_destruct;
- (id)date;
- (id)initWithText:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)text;

@end
