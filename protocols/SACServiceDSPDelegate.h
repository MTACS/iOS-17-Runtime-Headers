
@protocol SACServiceDSPDelegate <NSObject>

@required

- (void)getDSPInfoByKey:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setDSPConfig:(NSDictionary *)arg1;

@end
