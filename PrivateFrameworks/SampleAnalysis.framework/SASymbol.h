
@interface SASymbol : NSObject {
    unsigned long long  _length;
    NSString * _name;
    unsigned long long  _offsetIntoSegment;
    NSMutableArray * _sourceInfos;
}

@property (readonly) unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offsetIntoSegment;
@property (readonly) unsigned long long offsetIntoTextSegment;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)length;
- (id)name;
- (unsigned long long)offsetIntoSegment;
- (unsigned long long)offsetIntoTextSegment;

@end
