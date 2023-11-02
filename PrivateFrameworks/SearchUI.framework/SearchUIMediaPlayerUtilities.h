
@interface SearchUIMediaPlayerUtilities : NSObject

+ (long long)MPMediaEntityTypeForSFMediaEntityType:(int)arg1;
+ (long long)MPMediaGroupingForMPMediaEntityType:(long long)arg1;
+ (void)fetchVideoPunchoutForActionItem:(id)arg1 completion:(id /* block */)arg2;
+ (id)filterPropertyForMPMediaEntityType:(long long)arg1;

@end
