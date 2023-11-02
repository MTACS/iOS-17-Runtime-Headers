
@interface NSNotATextLocation : NSObject <NSTextLocation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)notATextLocation;

- (long long)compare:(id)arg1;

@end
