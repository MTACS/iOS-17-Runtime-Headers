
@protocol MKInactiveTransitLine <NSObject>

@required

- (<GEOTransitDepartureSequence> *)departuresSequence;
- (<GEOTransitLine> *)line;
- (NSString *)serviceResumesDescription;

@end
