
@interface EDLink : NSObject {
    EDCollection * mExternalNames;
    int  mType;
}

+ (id)linkWithType:(int)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)externalNames;
- (id)initWithType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
