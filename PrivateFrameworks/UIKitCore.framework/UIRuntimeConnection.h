
@interface UIRuntimeConnection : NSObject <NSCoding> {
    id  _destination;
    NSString * _label;
    id  _source;
}

@property (nonatomic, retain) id destination;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) id source;

- (void).cxx_destruct;
- (void)connect;
- (void)connectForSimulator;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setDestination:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
