
@interface PSIToken : NSObject {
    struct { 
        long long location; 
        long long length; 
    }  _range;
    struct __CFString { } * _string;
}

@property (nonatomic) struct { long long x1; long long x2; } range;
@property (nonatomic, retain) struct __CFString { }*string;

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithString:(struct __CFString { }*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; long long x2; })range;
- (void)setRange:(struct { long long x1; long long x2; })arg1;
- (void)setString:(struct __CFString { }*)arg1;
- (struct __CFString { }*)string;

@end
