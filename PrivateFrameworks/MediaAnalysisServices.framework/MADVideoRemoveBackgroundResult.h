
@interface MADVideoRemoveBackgroundResult : MADVideoResult {
    NSData * _data;
    unsigned long long  _height;
    UTType * _uniformTypeIdentifier;
    unsigned long long  _width;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) UTType *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniformTypeIdentifier:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 data:(id)arg4;
- (id)uniformTypeIdentifier;
- (unsigned long long)width;

@end
