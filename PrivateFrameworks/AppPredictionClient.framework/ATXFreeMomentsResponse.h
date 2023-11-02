
@interface ATXFreeMomentsResponse : NSObject <NSSecureCoding> {
    NSArray * _freeMoments;
}

@property (nonatomic, readonly) NSArray *freeMoments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)freeMoments;
- (id)initWithCoder:(id)arg1;
- (id)initWithFreeMoments:(id)arg1;

@end
