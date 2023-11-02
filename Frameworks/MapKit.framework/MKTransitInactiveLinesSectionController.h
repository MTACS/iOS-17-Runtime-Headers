
@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    NSArray * _inactiveLines;
    <GEOTransitLine> * _line;
}

@property (nonatomic, readonly) NSArray *inactiveLines;

- (void).cxx_destruct;
- (void)_buildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)inactiveLines;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 line:(id)arg3;

@end
