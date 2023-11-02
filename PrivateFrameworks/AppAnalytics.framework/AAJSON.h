
@interface AAJSON : NSObject {
    void value;
}

@property (nonatomic, readonly) id any;
@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool exists;
@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) NSDictionary *object;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (id)any;
- (id)array;
- (id)description;
- (bool)exists;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)number;
- (id)object;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)string;
- (id)toDataWithOptions:(unsigned long long)arg1 :(id*)arg2;

@end
