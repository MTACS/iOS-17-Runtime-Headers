
@interface CRKMobileGestalt : NSObject

@property (nonatomic, readonly) unsigned long long availableBytes;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly) double mainScreenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mainScreenSizeInPixels;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly, copy) NSString *serialNumber;

+ (id)sharedGestalt;

- (id)answerForQuestion:(struct __CFString { }*)arg1;
- (id)answerForQuestion:(struct __CFString { }*)arg1 ofClass:(Class)arg2;
- (unsigned long long)availableBytes;
- (id)buildVersion;
- (double)mainScreenScale;
- (struct CGSize { double x1; double x2; })mainScreenSizeInPixels;
- (id)productVersion;
- (id)serialNumber;

@end
