
@interface CCUIModuleSettings : NSObject <NSCopying> {
    bool  _landscapeDoubleMargin;
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _landscapeLayoutSize;
    bool  _portraitDoubleMargin;
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _portraitLayoutSize;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)doubleMarginForInterfaceOrientation:(long long)arg1;
- (unsigned long long)hash;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg1 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg1 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg2 portraitDoubleMargin:(bool)arg3 landscapeDoubleMargin:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })layoutSizeForInterfaceOrientation:(long long)arg1;

@end
