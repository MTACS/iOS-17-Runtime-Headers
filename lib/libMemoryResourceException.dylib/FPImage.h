
@interface FPImage : NSObject {
    NSString * _name;
    NSString * _ownerPath;
    unsigned char  _segment;
    unsigned long long  _size;
    unsigned long long  _start;
}

- (void).cxx_destruct;

@end
