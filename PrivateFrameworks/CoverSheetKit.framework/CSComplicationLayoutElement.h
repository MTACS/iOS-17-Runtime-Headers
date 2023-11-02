
@interface CSComplicationLayoutElement : NSObject <NSCopying> {
    unsigned long long  _complicationFamily;
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) unsigned long long complicationFamily;
@property (nonatomic, readonly) long long gridWidth;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (unsigned long long)complicationFamily;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)gridWidth;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 complicationFamily:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
