
@interface SBRingerButtonParameters : NSObject <BSDescriptionStreamable, NSCopying> {
    double  _longPressTime;
    double  _longPressTimeWhenSuppressed;
    long long  _viewObstructionEligibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;

@end
