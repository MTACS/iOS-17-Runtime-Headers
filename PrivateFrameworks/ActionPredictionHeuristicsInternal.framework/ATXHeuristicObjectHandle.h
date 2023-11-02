
@interface ATXHeuristicObjectHandle : NSObject <NSSecureCoding> {
    NSNumber * _deviceHandle;
    id  _obj;
    NSNumber * _objHandle;
}

@property (nonatomic, readonly) id obj;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 wrapping:(id)arg2;
- (id)obj;

@end
