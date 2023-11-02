
@interface SNUltronUtils : NSObject

+ (id)addResult:(id)arg1 toHistoryForRequest:(id)arg2 histories:(id)arg3 ultronHistoryDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 sysdiagnoseHistoryDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
+ (id)collectConfidencesFromResults:(id)arg1;
+ (id)collectDetectedStatusFromResults:(id)arg1;
+ (id)collectTimestampsFromResults:(id)arg1;
+ (id)completeOptionalUltronReportForRequest:(id)arg1 allReporters:(id)arg2;
+ (void)completeUltronReportForReporter:(id)arg1;
+ (void)completeUltronReportsForManyReporters:(id)arg1;
+ (id)createUltronReportOperatorForRequest:(id)arg1 recordingFormat:(id)arg2 error:(id*)arg3;
+ (id)emplaceUltronReportOperatorForRequest:(id)arg1 recordingFormat:(id)arg2 allReporters:(id)arg3 error:(id*)arg4;
+ (id)generateRecordingWavFilenameForDate:(id)arg1 requestDescription:(id)arg2;
+ (id)generateRecordingWavURLForDate:(id)arg1 requestDescription:(id)arg2 directoryURL:(id)arg3;
+ (id)generateReportBasenameForDate:(id)arg1 requestDescription:(id)arg2;
+ (id)generateSummaryReportFilenameForDate:(id)arg1 requestDescription:(id)arg2;
+ (id)generateSummaryReportURLForDate:(id)arg1 requestDescription:(id)arg2 directoryURL:(id)arg3;
+ (id)groupDetectionResultsByIdentifier:(id)arg1;
+ (id)openRecordingWavForDate:(id)arg1 requestDescription:(id)arg2 format:(id)arg3 directoryURL:(id)arg4 error:(id*)arg5;
+ (id)reanchorTimes:(id)arg1;
+ (id)reanchorTimesRelativeToFirstOfTimeRangeWritables:(id)arg1;
+ (bool)sendInputToOptionalUltronReporterForRequest:(id)arg1 allReporters:(id)arg2 audioBuffer:(id)arg3;
+ (bool)sendInputToOptionalUltronReporterForRequest:(id)arg1 allReporters:(id)arg2 result:(id)arg3;
+ (void)sendInputToUltronReporter:(id)arg1 audioBuffer:(id)arg2;
+ (bool)sendInputToUltronReporter:(id)arg1 audioHistory:(void*)arg2 resultsHistory:(id)arg3 maxDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 error:(id*)arg5;
+ (void)sendInputToUltronReporter:(id)arg1 recentFramesOfAudioBuffer:(void*)arg2 frameCount:(unsigned int)arg3;
+ (bool)sendInputToUltronReporter:(id)arg1 recentFramesOfAudioBuffer:(void*)arg2 startingFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
+ (void)sendInputToUltronReporter:(id)arg1 result:(id)arg2;
+ (void)sendInputToUltronReporter:(id)arg1 results:(id)arg2;
+ (void)sendInputToUltronReporters:(id)arg1 audioBuffer:(id)arg2;
+ (id)startOrContinueUltronReportForRequest:(id)arg1 existingReporter:(id)arg2 recordingFormat:(id)arg3 newResult:(id)arg4 resultsHistory:(id)arg5 audioHistory:(void*)arg6 historyRecordDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 error:(id*)arg8;
+ (id)subtractTimeOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromTimeRangeWritable:(id)arg2;
+ (id)subtractTimeOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromTimeRangeWritables:(id)arg2;
+ (id)summaryReportConfidenceValuesForResults:(id)arg1;
+ (id)summaryReportForDate:(id)arg1 requestDescription:(id)arg2 detectionResults:(id)arg3 buildVersion:(id)arg4 processedFrameCount:(long long)arg5;
+ (id)summaryReportGroupedConfidenceValuesForResults:(id)arg1;
+ (id)updateUltronReportForRequest:(id)arg1 existingReporter:(id)arg2 recordingFormat:(id)arg3 shouldRecordNewResult:(bool)arg4 newResult:(id)arg5 resultsHistory:(id)arg6 audioHistory:(void*)arg7 historyRecordDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 error:(id*)arg9;
+ (id)updateUltronReportForRequest:(id)arg1 recordingFormat:(id)arg2 allReporters:(id)arg3 shouldRecordNewResult:(bool)arg4 newResult:(id)arg5 resultsHistories:(id)arg6 audioHistory:(void*)arg7 historyRecordDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 error:(id*)arg9;
+ (id)writeSummaryReportAsJSONToDirectoryURL:(id)arg1 jsonWritingOptions:(unsigned long long)arg2 createIntermediateDirectories:(bool)arg3 overwrite:(bool)arg4 date:(id)arg5 requestDescription:(id)arg6 detectionResults:(id)arg7 buildVersion:(id)arg8 processedFrameCount:(long long)arg9 error:(id*)arg10;
+ (id)writeSummaryReportAsJSONToURL:(id)arg1 jsonWritingOptions:(unsigned long long)arg2 createIntermediateDirectories:(bool)arg3 overwrite:(bool)arg4 date:(id)arg5 requestDescription:(id)arg6 detectionResults:(id)arg7 buildVersion:(id)arg8 processedFrameCount:(long long)arg9 error:(id*)arg10;

@end
