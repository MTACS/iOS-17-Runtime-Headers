
@interface BMFileHandle : NSObject <NSSecureCoding> {
    BMFileAttributes * _attributes;
    int  _fd;
    bool  _initialized;
}

@property (nonatomic, readonly) BMFileAttributes *attributes;
@property (nonatomic, readonly) int fd;
@property (nonatomic, readonly) bool isStale;
@property (nonatomic, readonly) NSFileHandle *nsFileHandle;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithFileDescriptor:(int)arg1 attributes:(id)arg2;
- (id)attributes;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)fd;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 attributes:(id)arg2;
- (bool)isStale;
- (id)nsFileHandle;
- (bool)overwriteWithData:(id)arg1 error:(id*)arg2;
- (id)readDataWithError:(id*)arg1;

@end
