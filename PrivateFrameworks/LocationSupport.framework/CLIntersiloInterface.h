
@interface CLIntersiloInterface : NSObject

+ (id)sharedInterface;

- (void)extendSelectorInfoWithProtocol:(id)arg1 bases:(id)arg2;
- (id)getInfoForSelector:(SEL)arg1;
- (bool)hasInfoForSelector:(SEL)arg1;

@end
