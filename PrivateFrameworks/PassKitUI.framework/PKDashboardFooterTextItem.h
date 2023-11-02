
@interface PKDashboardFooterTextItem : NSObject <PKDashboardItem> {
    id /* block */  _action;
    NSString * _footerText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    UIColor * _linkTextColor;
}

@property (nonatomic, copy) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (nonatomic, retain) UIColor *linkTextColor;
@property (readonly) Class superclass;

+ (id)identifier;
+ (id)itemWithFooterText:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)footerText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (id)linkTextColor;
- (void)setAction:(id /* block */)arg1;
- (void)setFooterText:(id)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLinkTextColor:(id)arg1;

@end
