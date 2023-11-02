
@interface GQDTComputedFormatSpec : NSObject {
    id  mFormat;
}

- (void)dealloc;
- (id)format;
- (bool)isDateFormat;
- (bool)isDurationFormat;
- (bool)isNumberFormat;

@end
