
@protocol PIPosterLayoutResult <NURenderResult>

@required

- (PFPosterLayout *)layout;
- (NSDictionary *)scores;

@end
