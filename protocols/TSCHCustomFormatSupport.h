
@protocol TSCHCustomFormatSupport <NSObject, NSCopying, TSCHFormatTypeSupport>

@required

- (NSUUID *)customFormatListKey;
- (TSKFormat *)format;
- (bool)isCustom;

@end
