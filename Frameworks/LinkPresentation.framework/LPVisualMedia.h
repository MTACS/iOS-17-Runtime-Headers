
@interface LPVisualMedia : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    NSURL * _fileURL;
    LPVisualMediaProperties * _properties;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, retain) NSURL *fileURL;
@property (nonatomic, readonly, copy) LPVisualMediaProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (unsigned long long)_encodedSize;
- (id)_initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)_initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)_initWithData:(id)arg1 fileURL:(id)arg2 MIMEType:(id)arg3 properties:(id)arg4;
- (id)_initWithLPVisualMedia:(id)arg1;
- (bool)_isSubstitute;
- (void)_mapDataFromFileURL;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 properties:(id)arg2;
- (id)initWithCoderInternal:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (void)setFileURL:(id)arg1;

@end
