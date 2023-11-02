
@protocol PUCMMActivityItemSourceDelegate <NSObject>

@required

- (void)cmmActivityItemSource:(void *)arg1 didFinishPreparationForActivityType:(void *)arg2 preparationType:(void *)arg3 withItems:(void *)arg4 didCancel:(void *)arg5 error:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 11: PUCMMActivityItemSource *, NSString *, unsigned long long, NSArray *, bool, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cmmActivityItemSource:(PUCMMActivityItemSource *)arg1 willBeginPreparationWithActivityType:(NSString *)arg2 preparationType:(unsigned long long)arg3;

@end
