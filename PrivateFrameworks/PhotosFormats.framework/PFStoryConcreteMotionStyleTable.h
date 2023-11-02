
@interface PFStoryConcreteMotionStyleTable : NSObject <PFStoryMotionStyleTable> {
    NSArray * _defaultFrequencies;
    NSDictionary * _motionStylesByColorGrade;
}

- (void).cxx_destruct;
- (id)initWithMotionStylesByColorGrade:(id)arg1 defaultFrequencies:(id)arg2;
- (id)motionStylesForColorGrade:(id)arg1 songPace:(long long)arg2;

@end
