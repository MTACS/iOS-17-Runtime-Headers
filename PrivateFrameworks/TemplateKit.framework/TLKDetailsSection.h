
@interface TLKDetailsSection : TLKObject {
    NSArray * _details;
    TLKMultilineText * _title;
}

@property (nonatomic, retain) NSArray *details;
@property (nonatomic, retain) TLKMultilineText *title;

- (void).cxx_destruct;
- (id)details;
- (void)setDetails:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
