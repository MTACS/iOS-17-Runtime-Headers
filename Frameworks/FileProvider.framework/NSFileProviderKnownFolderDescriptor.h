
@interface NSFileProviderKnownFolderDescriptor : NSObject <NSSecureCoding> {
    unsigned long long  _detachOptions;
    NSURL * _knownFolder;
    NSURL * _logicalLocation;
}

@property (nonatomic, readonly) unsigned long long detachOptions;
@property (nonatomic, readonly) NSURL *knownFolder;
@property (nonatomic, readonly) NSURL *logicalLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)detachOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnownFolder:(id)arg1 logicalLocation:(id)arg2;
- (id)initWithKnownFolder:(id)arg1 logicalLocation:(id)arg2 detachOptions:(unsigned long long)arg3;
- (id)knownFolder;
- (id)logicalLocation;

@end
