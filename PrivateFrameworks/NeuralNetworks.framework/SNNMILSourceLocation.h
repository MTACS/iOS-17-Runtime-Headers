
@interface SNNMILSourceLocation : NSObject {
    unsigned long long  _column;
    NSString * _filename;
    bool  _isLocationKnown;
    unsigned long long  _line;
    struct unique_ptr<MIL::Location, std::default_delete<MIL::Location>> { 
        struct __compressed_pair<MIL::Location *, std::default_delete<MIL::Location>> { 
            struct Location {} *__value_; 
        } __ptr_; 
    }  _milLocation;
}

@property (nonatomic, readonly) unsigned long long column;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned long long line;

+ (id)locationOrEmpty:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)column;
- (id)filename;
- (id)init;
- (id)initWithFilename:(id)arg1 line:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (bool)isLocationKnown;
- (unsigned long long)line;
- (struct unique_ptr<MIL::Location, std::default_delete<MIL::Location>> { struct __compressed_pair<MIL::Location *, std::default_delete<MIL::Location>> { struct Location {} *x_1_1_1; } x1; })milLocation;

@end
