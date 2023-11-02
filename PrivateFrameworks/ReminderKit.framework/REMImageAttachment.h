
@interface REMImageAttachment : REMFileAttachment {
    unsigned long long  _height;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long width;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (id)_deepCopy;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 width:(unsigned long long)arg8 height:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
