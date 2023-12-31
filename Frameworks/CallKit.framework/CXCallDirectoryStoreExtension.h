
@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _primaryKey;
    long long  _priority;
    long long  _state;
    NSDate * _stateLastModified;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long primaryKey;
@property (nonatomic) long long priority;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSDate *stateLastModified;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (long long)primaryKey;
- (long long)priority;
- (void)setIdentifier:(id)arg1;
- (void)setPrimaryKey:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setStateLastModified:(id)arg1;
- (long long)state;
- (id)stateLastModified;

@end
