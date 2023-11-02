
@protocol RERemoteTrainingServerInterface <NSObject>

@required

- (void)performTrainingWithElements:(void *)arg1 events:(void *)arg2 interactions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateRemoteAttribute:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <NSSecureCoding> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
