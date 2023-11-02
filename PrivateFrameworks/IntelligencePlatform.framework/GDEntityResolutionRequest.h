
@interface GDEntityResolutionRequest : NSObject <NSCopying, NSSecureCoding> {
    long long  _constraint;
    NSArray * _entityClassFilter;
    bool  _includeFeatures;
    NSString * _kgq;
    long long  _mode;
    NSArray * _sourceIDs;
    NSArray * _spans;
    NSString * _text;
}

@property (nonatomic, readonly) long long constraint;
@property (nonatomic, readonly, copy) NSArray *entityClassFilter;
@property (nonatomic, readonly) bool includeFeatures;
@property (nonatomic, readonly, copy) NSString *kgq;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly, copy) NSArray *sourceIDs;
@property (nonatomic, readonly, copy) NSArray *spans;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)constraint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityClassFilter;
- (bool)includeFeatures;
- (id)initWithCoder:(id)arg1;
- (id)initWithKgq:(id)arg1 mode:(long long)arg2;
- (id)initWithKgq:(id)arg1 text:(id)arg2 mode:(long long)arg3;
- (id)initWithKgq:(id)arg1 text:(id)arg2 mode:(long long)arg3 includeFeatures:(bool)arg4;
- (id)initWithSourceIDs:(id)arg1 text:(id)arg2 mode:(long long)arg3;
- (id)initWithSourceIDs:(id)arg1 text:(id)arg2 mode:(long long)arg3 includeFeatures:(bool)arg4;
- (id)initWithSourceIDs:(id)arg1 text:(id)arg2 spans:(id)arg3 mode:(long long)arg4 includeFeatures:(bool)arg5;
- (id)initWithText:(id)arg1 entityClassFilter:(id)arg2 spans:(id)arg3;
- (id)initWithText:(id)arg1 entityClassFilter:(id)arg2 spans:(id)arg3 mode:(long long)arg4 constraint:(long long)arg5;
- (id)initWithText:(id)arg1 entityClassFilter:(id)arg2 spans:(id)arg3 mode:(long long)arg4 constraint:(long long)arg5 kgq:(id)arg6;
- (id)initWithText:(id)arg1 entityClassFilter:(id)arg2 spans:(id)arg3 mode:(long long)arg4 constraint:(long long)arg5 sourceIDs:(id)arg6 kgq:(id)arg7;
- (id)initWithText:(id)arg1 entityClassFilter:(id)arg2 spans:(id)arg3 mode:(long long)arg4 constraint:(long long)arg5 sourceIDs:(id)arg6 kgq:(id)arg7 includeFeatures:(bool)arg8;
- (id)kgq;
- (long long)mode;
- (id)sourceIDs;
- (id)spans;
- (id)text;

@end
