
@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo> {
    GEOTransitTicketingSegment * _segment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *segmentName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *ticketingUrl;

- (void).cxx_destruct;
- (id)initWithSegment:(id)arg1;
- (id)segmentName;
- (id)ticketingUrl;

@end
