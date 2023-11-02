
@interface TCDumpField : NSObject {
    NSString * mName;
    TCDumpType * mType;
}

- (void).cxx_destruct;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)name;
- (id)type;

@end
