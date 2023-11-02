
@interface BMBookmarkNode : NSObject <BMBookmark, NSSecureCoding> {
    NSString * _name;
    NSArray * _upstreams;
    <BMBookmark> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *upstreams;
@property (nonatomic, retain) <BMBookmark> *value;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionAtLevel:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 upstreams:(id)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUpstreams:(id)arg1;
- (void)setValue:(id)arg1;
- (id)upstreams;
- (id)value;

@end
