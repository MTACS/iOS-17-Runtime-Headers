
@interface UIWebPDFLinkAction : NSObject {
    id /* block */  handler;
    NSString * title;
    int  type;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;

- (void)dealloc;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;

@end
