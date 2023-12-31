
@interface GEOVenueLabel : NSObject <GEOVenueLabel> {
    NSString * _detail;
    NSString * _name;
    NSString * _shortName;
}

@property (nonatomic, readonly) NSString *detail;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;

- (void).cxx_destruct;
- (id)detail;
- (id)init;
- (id)initWithLabel:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3;
- (id)name;
- (id)shortName;

@end
