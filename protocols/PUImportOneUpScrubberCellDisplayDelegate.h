
@protocol PUImportOneUpScrubberCellDisplayDelegate

@required

- (void)importOneUpScrubberCell:(PUImportOneUpScrubberCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importOneUpScrubberCell:(void *)arg1 requestedThumbnailForImportItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PUImportOneUpScrubberCell *, PXImportItemViewModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, bool, void*

@end
