
@protocol HMActionSetConfiguration <HMApplicationData>

@required

- (NSString *)actionSetType;
- (NSSet *)actions;
- (void)addAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)name;
- (void)removeAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateName:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
