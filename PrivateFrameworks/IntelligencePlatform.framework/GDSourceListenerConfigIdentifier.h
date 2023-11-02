
@interface GDSourceListenerConfigIdentifier : NSObject <NSSecureCoding> {
    int  _index;
    NSString * _schedule;
    NSString * _sourceIdentifier;
    NSString * _sourceType;
    NSString * _view;
}

@property (nonatomic, readonly) int index;
@property (nonatomic, readonly) NSString *schedule;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSString *sourceType;
@property (nonatomic, readonly) NSString *view;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 sourceType:(id)arg2 index:(int)arg3 schedule:(id)arg4 sourceIdentifier:(id)arg5;
- (id)schedule;
- (id)sourceIdentifier;
- (id)sourceType;
- (id)view;

@end
