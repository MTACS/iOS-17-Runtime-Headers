
@interface IMMessagePartGUID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _encodedMessagePartGUID;
    NSString * _messageGUID;
    unsigned long long  _partNumber;
    NSString * _prefix;
    struct IMMessagePartRanges { 
        struct _NSRange { 
            unsigned long long location; 
            unsigned long long length; 
        } prefixRange; 
        struct _NSRange { 
            unsigned long long location; 
            unsigned long long length; 
        } partNumberRange; 
        struct _NSRange { 
            unsigned long long location; 
            unsigned long long length; 
        } messageGUIDRange; 
    }  _ranges;
}

@property (nonatomic, readonly, copy) NSString *encodedMessagePartGUID;
@property (nonatomic, readonly, copy) NSString *messageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messageGUIDRange;
@property (nonatomic, readonly) unsigned long long partNumber;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } partNumberRange;
@property (nonatomic, readonly, copy) NSString *prefix;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } prefixRange;
@property (nonatomic, readonly) struct IMMessagePartRanges { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; } ranges;

+ (id)encodeMessagePartGUID:(id)arg1 prefix:(id)arg2;
+ (id)encodeMessagePartGUID:(id)arg1 prefix:(id)arg2 partNumber:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)decodeRangesWithEncodedGuid:(id)arg1 ranges:(struct IMMessagePartRanges { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; }*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedMessagePartGUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedMessagePartGUID:(id)arg1;
- (id)initWithEncodedMessagePartGUID:(id)arg1 messageGUID:(id)arg2 prefix:(id)arg3 partNumber:(unsigned long long)arg4 ranges:(struct IMMessagePartRanges { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; })arg5;
- (id)initWithMessageGUID:(id)arg1 prefix:(id)arg2;
- (id)initWithMessageGUID:(id)arg1 prefix:(id)arg2 partNumber:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)messageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messageGUIDRange;
- (unsigned long long)partNumber;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })partNumberRange;
- (id)prefix;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })prefixRange;
- (struct IMMessagePartRanges { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; })ranges;

@end
