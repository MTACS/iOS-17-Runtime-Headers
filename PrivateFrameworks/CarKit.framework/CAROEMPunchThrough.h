
@interface CAROEMPunchThrough : NSObject {
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)type;

@end
