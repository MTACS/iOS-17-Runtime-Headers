
@protocol SYShowBacklinkIndicatorCommandImpl <NSObject>

@required

- (id)initWithDomainIdentifiers:(NSArray *)arg1 linkIdentifiers:(NSArray *)arg2;
- (void)invalidate;
- (bool)isActive;
- (void)runWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
